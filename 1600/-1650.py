codeup=""" ****  ***  ***   ***** *   * ****
*     *   * *  *  *     *   * *   *
*     *   * *   * *     *   * *   *
*     *   * *   * ****  *   * ****
*     *   * *   * *     *   * *
*     *   * *  *  *     *   * *
 ****  ***  ***   *****  ***  *"""
data=codeup.split("\n")
cnt=0
w=int(input())
h=int(input())
for i in range(7*h):
    for j in range(len(data[cnt])):
        print(data[cnt][i]*w)
    cnt+=1