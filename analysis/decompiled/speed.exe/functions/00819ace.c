/* speed.exe 00819ace FUN_00819ace; analysis pseudocode, not buildable source.
 * calls 0081eb58 FUN_0081eb58
 */

int FUN_00819ace(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1[4] != 0) {
    uVar1 = FUN_0081eb58();
    iVar2 = 0;
    if (0 < param_1[2]) {
      do {
        uVar3 = uVar3 + (int)*(char *)(*param_1 + 0x10 + iVar2);
        if (uVar1 % 100 < uVar3) {
          param_1[3] = param_1[1] + iVar2;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[2]);
    }
  }
  return param_1[3];
}

