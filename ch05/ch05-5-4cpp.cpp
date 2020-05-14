//후위 표기법

element evalPostfix(char* exp) {
	int opr1, opr2, value, i = 0;
	int length = strlen(exp);
	char symbol;
	top = NULL;


	for ( i = 0; i < length; i++)
	{
		symbol = exp[i];
		if (symbol != '+' && symbol != '-' && symbol != '*' && symbol !='/' )
		{
			value = symbol - '0';
			push(value);
		}
		else {
			opr2 = pop();
			opr1 = pop();
			switch (symbol) {
			case '+': push(opr1 + opr2); break;
			case '-': push(opr1 - opr2); break;
			case '*': push(opr1 * opr2); break;
			case '/': push(opr1 / opr2); break;


			}
		}
	}
	return pop();
}

void main(void) {
	int result;
	char* express = "35*62/-"
		printf("후위 표기식 : %s", express);

	result = evalPostfix(express);
	printf("\n\n연산결과 => %d", result);

	getchar();
}


