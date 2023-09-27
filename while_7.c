#include<stdio.h>
#include<math.h>

int main() {
	int i, prim=2, posPrim=1, seg=7, posSeg=2, terc=3, posTerc=3;
	for (i=1;i<=500;i++) {
		if (posPrim == i) {
			printf("%d \n", prim);
			prim = prim * 2;
			posPrim = posPrim + 3;
		}
		else
			if (posSeg == i) {
				printf("%d \n", seg);
				seg = seg * 3;
				posSeg = posSeg + 3;
			}
			else {
				printf("%d \n", terc);
				terc = terc * 4;
				posTerc = posTerc + 3;
			}
	}
	return 0;
}