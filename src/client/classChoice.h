#define PR_HUMAN 0
#define PR_HALF_ELF 1
#define PR_ELF 2
#define PR_HOBBIT 3
#define PR_GNOME 4
#define PR_DWARF 5
#define PR_HALF_ORC 6
#define PR_HALF_TROLL 7
#define PR_DUNADAN 8
#define PR_RAPPY 9
#define PR_YEEK 10
#define PR_AMBERITE 13


static int * classAvailable (int i)
{
    int *classOptions = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        classOptions[i] = 0;
    }
    switch (i)
    {
        case PR_HUMAN:
        case PR_HALF_ELF:
            classOptions[0] = classOptions[1] = classOptions[2] = classOptions[3] = classOptions[4] = classOptions[5] = classOptions[6] = 1;
            //classOptions = (int[10]){1, 1, 1, 1, 1, 1, 0, 0, 0, 0};
            break;
        case PR_ELF:
            classOptions[0] = classOptions[1] = classOptions[2] = classOptions[3] = classOptions[4] = 1;
            //classOptions = (int[10]){1, 1, 0, 1, 1, 0, 0, 0, 0, 0};
            break;
        case PR_HOBBIT:
            classOptions[0] = classOptions[3] = classOptions[4] = 1;
            //classOptions = (int[10]){1, 0, 0, 1, 1, 0, 0, 0, 0, 0};
            break;
        case PR_GNOME:
            classOptions[0] = classOptions[1] = classOptions[2] = classOptions[3] = 1;
            //classOptions = (int[10]){1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
            break;
        case PR_DWARF:
            classOptions[0] = classOptions[2] = classOptions[5] = 1;
            //classOptions = (int[10]){1, 0, 1, 0, 0, 1, 0, 0, 0, 0};
            break;
        case PR_HALF_ORC:
            classOptions[0] = classOptions[2] = classOptions[3] = 1;
            //classOptions = (int[10]){1, 0, 1, 1, 0, 0, 0, 0, 0, 0};
            break;
        case PR_HALF_TROLL:
            classOptions[0] = classOptions[2] = 1;
            //classOptions = (int[10]){1, 0, 1, 0, 0, 0, 0, 0, 0, 0};
            break;
        case PR_DUNADAN:
            classOptions[0] = classOptions[1] = classOptions[2] = classOptions[4] = classOptions[5] = 1;
            //classOptions = (int[10]){1, 1, 1, 0, 1, 1, 0, 0, 0, 0};
            break;
        case PR_RAPPY:
            classOptions[0] = classOptions[1] = classOptions[3] = classOptions[4] = classOptions[6] = 1;
            //classOptions = (int[10]){1, 1, 1, 0, 1, 0, 0, 0, 0, 0};
            break;
        case PR_YEEK:
            classOptions[0] = classOptions[2] = classOptions[3] = classOptions[4] = 1;
            //classOptions = (int[10]){1, 0, 1, 1, 1, 0, 0, 0, 0, 0};
            break;
        default:
            classOptions[0] = 1;
            //classOptions = (int[10]){1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            break;

    }
    return classOptions;
}
