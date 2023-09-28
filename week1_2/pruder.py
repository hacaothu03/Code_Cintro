def find_prufer_code(edges):
    n = len(edges) + 2  # Số đỉnh của cây
    degrees = [0] * n  # Mảng lưu bậc của các đỉnh

    # Tính bậc của các đỉnh
    for edge in edges:
        u, v = edge
        degrees[u] += 1
        degrees[v] += 1

    prufer_code = []

    for _ in range(n - 2):
        leaf = min(i for i in range(n) if degrees[i] == 1)  # Tìm đỉnh lá có giá trị nhỏ nhất

        # Tìm đỉnh kề với đỉnh lá và loại bỏ cạnh giữa hai đỉnh đó
        for u, v in edges:
            if leaf == u and degrees[v] == 1:
                neighbor = v
                break
            elif leaf == v and degrees[u] == 1:
                neighbor = u
                break

        prufer_code.append(neighbor)  # Thêm đỉnh kề vào Prufer code
        degrees[leaf] -= 1  # Giảm bậc của đỉnh lá đi 1
        degrees[neighbor] -= 1  # Giảm bậc của đỉnh kề đi 1

        # Loại bỏ cạnh đã được sử dụng
        edges.remove((leaf, neighbor))

    return prufer_code


# Hàm chính
if __name__ == "__main__":
    num_edges = int(input("Nhập số cạnh của cây: "))

    edges = []
    for _ in range(num_edges):
        u, v = map(int, input("Nhập cạnh (u, v): ").split())
        edges.append((u, v))

    prufer_code = find_prufer_code(edges)

    print("Prufer code của cây là:", " ".join(map(str, prufer_code)))
