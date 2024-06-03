/*
#include <stdio.h>
#define MAX 50
int main(){
	int no_edge=0;
	int selected[MAX];
	selected[0]=1;
	int x, y;
	while(no_edge<v-1){
		int min=1000;
		x=0, y=0;
		for(i=0;i<v;i++) {
			if(selected[i]){
				for(j=0; j<v;j++) {
					if(!selected[j]&&graph[i][j]){
						if(min>graph[i][j]){
							min=graph[i][j];
							x=i;
							y=j;
						}
					}
				}
			}
		}
		printf("%d - %d : %d\n", x,y,graph[x],[y]);
		selected[y]=1;
		no_edge++;
	}
	return 0;
}
*/
#include <stdio.h>
#define MAX 50

int main() {
    int v=5; // Toplam d���m say�s�
    int graph[MAX][MAX]; // A��rl�kl� kom�uluk matrisi
    int no_edge = 0;
    int selected[MAX];
    selected[0] = 1;
    int x, y;
    int i, j;
  
    graph[0][1] = 2;
    graph[0][2] = 0;
    graph[0][3] = 3;
    graph[0][4] = 0;
    graph[1][2] = 4;
    graph[1][3] = 0;
    graph[1][4] = 1;
    graph[2][3] = 0;
    graph[2][4] = 5;
    graph[3][4] = 0;
/*
    // Graf i�in d���m say�s�n� al
    printf("Enter the number of vertices: ");
    scanf("%d", &v);

    // Graf i�in a��rl�kl� kom�uluk matrisini al
    printf("Enter the weighted adjacency matrix:\n");
    for (i = 0; i < v; i++) {
        for (j = 0; j < v; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
*/
    while (no_edge < v - 1) {
        int min = 1000;
        x = 0, y = 0;
        for (i = 0; i < v; i++) {
            if (selected[i]) {
                for (j = 0; j < v; j++) {
                    if (!selected[j] && graph[i][j]) {
                        if (min > graph[i][j]) {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        printf("%d - %d : %d\n", x, y, graph[x][y]);
        selected[y] = 1;
        no_edge++;
    }
    return 0;
}

