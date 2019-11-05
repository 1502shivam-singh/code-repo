printf("The product matrix is--\n\n");
{
	for (i = 0;i < 3;i++)
	{
		for (m = 0;m < 3;m++)
		{
			mult = 0;
			for (j = 0;j < 3;j++)
			{
				mult += A[i][j] * B[j][m];
			}
			printf("%d\t", mult);
		}printf("\n");
	}
}
}
