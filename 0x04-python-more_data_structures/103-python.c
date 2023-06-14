#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints bytes information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_bytes(PyObject *p)
{
	char *len1;
	long int size, k, hop;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = ((PyVarObject *)(p))->ob_size;
	len1 = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", size);
	printf("  trying len1: %s\n", len);

	if (size >= 10)
		hop = 10;
	else
		hop = size + 1;

	printf("  first %ld bytes:", hop);

	for (k = 0; k < hop; k++)
		if (len1[k] >= 0)
			printf(" %02x", len1[k]);
		else
			printf(" %02x", 256 + len1[k]);

	printf("\n");
}

/**
 * print_python_list - Prints list information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_list(PyObject *p)
{
	long int size, j;
	PyListObject *hit;
	PyObject *top;

	size = ((PyVarObject *)(p))->ob_size;
	hit = (PyListObject *)p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", hit->allocated);

	for (j = 0; j < size; j++)
	{
		top = ((PyListObject *)p)->ob_item[j];
		printf("Element %ld: %s\n", j, ((top)->ob_type)->tp_name);
		if (PyBytes_Check(top))
			print_python_bytes(top);
	}
}
