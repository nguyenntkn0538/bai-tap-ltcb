#include<stdio.h>
int main(){
	double gdp_2014,gdp_nam_hien_tai,toc_do_tang;
	int nam=2014;

	printf("Nhap GDP nam2014(USD):");
	scanf("%lf",&gdp_2014);
	printf("Nhap toc do tang truong tb moi nam(%%):");
	scanf("%lf",&toc_do_tang);
	// khoi tao bat dau 2014
	gdp_nam_hien_tai =gdp_2014;
	printf("\nNam\tGDP\n");

	// in tung nam 1 cho den khi GDP>2 so voi GDP 2014
	while(gdp_nam_hien_tai <= 2* gdp_2014){
		printf("%d\t%.2lf\n",nam,gdp_nam_hien_tai);
		nam++;
		gdp_nam_hien_tai += gdp_nam_hien_tai * (toc_do_tang /100.0);// tang theo%

	}
	return 0;
}
