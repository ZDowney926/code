#include <stdio.h>
#include <string.h>

char s[2 * 1024 * 1024 + 10]; // 输入文件最大2M

char img[1000][1024]; // 最多1000张图片，图片长度<1024(加上个\0正好≤1024)

int findImg4End(int begin) { // Find Img's End，从begin开始寻找img标签的结尾。(因为本题保证img标签不会换行，所以只要出现“<img ”，就可以认为出现了img标签，也就可以认为后面一定会出现闭合的“>”)
    while (s[begin] != '>')
        begin++;
    return begin;
}

int main() {
    int imgNum = 0;
    while (gets(s)) { // 因题目规定img标签不会跨行，因此一次分析一行即可
        int l = strlen(s);
        int analyze2 = 0; // Analyze to，分析到了哪一个字符
        while (analyze2 < l) {
            if (analyze2 + 4 < l && s[analyze2] == '<' && s[analyze2 + 1] == 'i' && s[analyze2 + 2] == 'm' && s[analyze2 + 3] == 'g' && s[analyze2 + 4] == ' ') { // 找到了一个img标签的开始
                int img4End = findImg4End(analyze2 + 5); // 找到一个img标签，范围[analyze2, img4End]
                // printf("img[%d, %d]\n", analyze2, img4End); //****
                int srcBegin = analyze2;
                while (!(s[srcBegin] == 's' && s[srcBegin + 1] == 'r' && s[srcBegin + 2] == 'c' && s[srcBegin + 3] == '=' && s[srcBegin + 4] == '"')) // 输入数据一定能找到
                    srcBegin++;
                srcBegin = srcBegin + 5; // “"”后面开始
                int srcEnd = srcBegin;
                while (s[srcEnd] != '"')
                    srcEnd++;
                // 图片地址的真正范围是 [srcBegin, srcEnd)
                // printf("src[%d, %d)\n", srcBegin, srcEnd); //****
                for (int loc = srcBegin; loc < srcEnd; loc++) {
                    img[imgNum][loc - srcBegin] = s[loc];
                }
                img[imgNum++][srcEnd] = '\0';
                analyze2 = img4End + 1;
            }
            else {
                analyze2++;
            }
        }
    }
    printf("%d\n", imgNum);
    for (int i = 0; i < imgNum; i++) {
        puts(img[i]);
    }
    return 0;
}