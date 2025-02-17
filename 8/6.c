#include <stdio.h>

struct complex {
    float a;
    float b;
};

struct complex add_complex(struct complex C, struct complex D) {
    struct complex E;
    E.a = C.a + D.a;
    E.b = C.b + D.b;
    return E;
}

struct complex multiply_complex(struct complex C, struct complex D) {
    struct complex F;
    F.a = (C.a * D.a) - (C.b * D.b);
    F.b = (C.b * D.a) + (C.a * D.b);
    return F;
}

void print_complex(const char *label, struct complex Data) {
    if (Data.a == 0) {
        if (Data.b == 0) {
            printf("%s0.0\n", label);
        } else {
            printf("%s%.1fi\n", label, Data.b);
        }
    } else if (Data.b == 0) {
        printf("%s%.1f\n", label, Data.a);
    } else if (Data.b < 0) {
        printf("%s%.1f - %.1fi\n", label, Data.a, -Data.b);
    } else {
        printf("%s%.1f + %.1fi\n", label, Data.a, Data.b);
    }
}

int main() {
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.a, &C.b);

    printf("Enter D: ");
    scanf("%f %f", &D.a, &D.b);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}
