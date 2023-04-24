triangle.


int check_lower_triangular_matrix(int mat[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = i + 1; j < 3; j++)
			if (mat[i][j] != 0)
				return 0;
return 1;
}

int main()
{
	int mat[3][3];
	int i, j;
	for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 3; j++)
				scanf(“%d”,&mat[i]);
		}
	if (check_lower_triangular_matrix(mat))
		printf(“Lower Triangular Matrix”);
	else
		printf(“Not a Lower Triangular Matrix”);
	return 0;
}
