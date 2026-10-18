/* speed.exe 00831880 FUN_00831880; analysis pseudocode, not buildable source.
 * calls 008314e4 FUN_008314e4
 */

int FUN_00831880(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_008314e4(param_1,0);
  if (-1 < iVar2) {
    piVar1 = (undefined4 *)*param_1 + 1;
    if (*param_2 == *piVar1) {
      iVar2 = 0;
    }
    else {
      puVar3 = *(undefined4 **)*param_1;
      *piVar1 = *param_2;
      for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
        (*(code *)puVar3[2])(piVar1,puVar3[3]);
      }
    }
  }
  return iVar2;
}

