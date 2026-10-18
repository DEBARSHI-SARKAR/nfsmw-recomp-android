/* speed.exe 0064ab00 FUN_0064ab00; analysis pseudocode, not buildable source.
 * calls 0064ab00 FUN_0064ab00
 */

void FUN_0064ab00(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  
  piVar1 = param_1;
joined_r0x0064ab0f:
  do {
    piVar2 = piVar1;
    if ((int *)((int)param_1 + param_2) <= piVar2) {
      return;
    }
    piVar1 = (int *)(piVar2[1] + 8 + (int)piVar2);
    bVar3 = (*piVar2 != -0x4cce0000) - 1U & (byte)DAT_008f7dd4;
    if (-1 < *piVar2) goto LAB_0064ab4a;
  } while (bVar3 != 0);
  FUN_0064ab00(piVar2 + 2,piVar2[1]);
  piVar2[1] = 0;
  goto LAB_0064ab4e;
LAB_0064ab4a:
  if (bVar3 == 0) {
LAB_0064ab4e:
    *piVar2 = 0;
  }
  goto joined_r0x0064ab0f;
}

