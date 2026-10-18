/* speed.exe 006db0d0 FUN_006db0d0; analysis pseudocode, not buildable source.
 * calls 006bd620 FUN_006bd620
 * calls 006c1010 FUN_006c1010
 * calls 006c27d0 FUN_006c27d0
 * calls 006d2100 FUN_006d2100
 * calls 006c5500 FUN_006c5500
 * calls 006cfce0 FUN_006cfce0
 * calls 006c3360 FUN_006c3360
 * calls 006c00d0 FUN_006c00d0
 * calls 006c0e80 FUN_006c0e80
 * calls 006bf690 FUN_006bf690
 * calls 006bfab0 FUN_006bfab0
 * calls 006bd7c0 FUN_006bd7c0
 */

int FUN_006db0d0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piStack_18;
  int *piStack_14;
  
  piStack_14 = (int *)0x6db0da;
  FUN_006d2100();
  piVar3 = &DAT_0093de78;
  do {
    piStack_14 = *(int **)(*piVar3 + 0x48);
    piStack_18 = (int *)0x6db0ee;
    (**(code **)(*piStack_14 + 0x114))();
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x93def4);
  piStack_14 = (int *)0x6db0fe;
  FUN_006bd620();
  piVar3 = &DAT_0093e03c;
  do {
    piStack_14 = (int *)*piVar3;
    if (piStack_14 != (int *)0x0) {
      piStack_18 = (int *)0x6db10f;
      (**(code **)(*piStack_14 + 8))();
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x93e04c);
  piStack_14 = (int *)0x6db125;
  FUN_006c3360();
  if ((DAT_0093cb18 != '\0') && (DAT_0093caf4 != (int *)0x0)) {
    piStack_14 = DAT_0093caf4;
    piStack_18 = (int *)0x6db13d;
    (**(code **)(*DAT_0093caf4 + 0x30))();
    DAT_0093cb18 = '\0';
  }
  piStack_14 = (int *)0x6db14e;
  FUN_006c1010();
  if (DAT_0093caf4 != (int *)0x0) {
    piStack_14 = DAT_0093caf4;
    piStack_18 = (int *)0x6db15d;
    (**(code **)(*DAT_0093caf4 + 8))();
  }
  piStack_14 = &DAT_0093e82c;
  piStack_18 = DAT_00982bdc;
  (**(code **)(*DAT_00982bdc + 0x40))();
  iVar1 = (**(code **)(*DAT_00982bdc + 0x40))(DAT_00982bdc,&DAT_0093e82c);
  if (iVar1 != 0) {
    if (0 < DAT_00901808) {
      DAT_00901808 = 0;
    }
    FUN_006c27d0(&piStack_14,&piStack_18);
    FUN_006bfab0(piStack_14,piStack_18,(&DAT_009829fc)[DAT_0090181c]);
    iVar1 = 0;
    do {
      iVar2 = (**(code **)(*DAT_00982bdc + 0x40))(DAT_00982bdc,&DAT_0093e82c);
      if (iVar2 == 0) goto LAB_006db25b;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    if (DAT_0090181c == 0) {
      return iVar2;
    }
    while( true ) {
      iVar1 = DAT_0090181c + -1;
      DAT_0090181c = iVar1;
      FUN_006c27d0(&piStack_14,&piStack_18);
      FUN_006bfab0(piStack_14,piStack_18,(&DAT_009829fc)[iVar1]);
      iVar1 = (**(code **)(*DAT_00982bdc + 0x40))(DAT_00982bdc,&DAT_0093e82c);
      if (iVar1 == 0) break;
      if (DAT_0090181c == 0) {
        return iVar1;
      }
    }
  }
LAB_006db25b:
  FUN_006c00d0();
  FUN_006bd7c0();
  FUN_006bf690();
  piStack_14 = (int *)0x400;
  piStack_18 = (int *)0x0;
  FUN_006c0e80(&piStack_18,&piStack_14);
  FUN_006cfce0();
  piVar3 = &DAT_0093de78;
  do {
    (**(code **)(**(int **)(*piVar3 + 0x48) + 0x118))(*(int **)(*piVar3 + 0x48));
    FUN_006c5500();
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x93def4);
  return 0;
}

