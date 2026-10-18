/* speed.exe 00451490 FUN_00451490; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00451490(int *param_1,int param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  
  *param_4 = 0;
  do {
    piVar1 = (int *)(*param_1 + param_3 * 0xc);
    if ((*(byte *)((int)piVar1 + 0xb) & 0x10) == 0) {
      if ((int *)piVar1[1] == piVar1) {
        return param_3;
      }
      if (((*(byte *)((int)piVar1 + 0xb) & 0x10) != 0) || ((int *)piVar1[1] != piVar1))
      goto LAB_004514c4;
      iVar2 = 0;
    }
    else {
LAB_004514c4:
      iVar2 = *piVar1;
    }
    if (iVar2 == param_2) {
      return 0xffffffff;
    }
    param_3 = (param_3 + 1) % (uint)param_1[1];
    *param_4 = *param_4 + 1;
  } while( true );
}

