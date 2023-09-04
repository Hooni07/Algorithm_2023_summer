def closest_pair(test):
    closest_point = [(0, 0), (10000, 10000)]
    closest_distance = 1000000
    index = 0
    while index < len(test):
        for i in range(index+1, len(test)):
            test_point = [test[index], test[i]]
            test_distance = distance(test[index], test[i])
            if (test_distance <= closest_distance):
                closest_point = test_point
                closest_distance = test_distance
        index = index + 1
    return closest_point


def distance(point1, point2):
    x_len = (point1[0] - point2[0]) ** 2
    y_len = (point1[1] - point2[1]) ** 2
    dis = (x_len + y_len) ** (1/2)
    return dis



# 테스트
test_coordinates = [(2, 3), (12, 30), (40, 50), (5, 1), (12, 10), (3, 4)]
print(closest_pair(test_coordinates))