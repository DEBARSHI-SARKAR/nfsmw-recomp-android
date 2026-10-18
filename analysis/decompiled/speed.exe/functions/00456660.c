/* speed.exe 00456660 FUN_00456660; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00456660(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_1[1];
  uVar3 = param_2 + 1;
  if (uVar3 < uVar2) {
    iVar4 = *param_1 + uVar3 * 0xc;
    do {
      if (*(int *)(iVar4 + 4) != iVar4) break;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar3 < uVar2);
    if (uVar3 < uVar2) {
      puVar1 = (undefined4 *)(*param_1 + uVar3 * 0xc);
      if (((undefined4 *)puVar1[1] != puVar1) && ((undefined4 *)puVar1[1] != puVar1)) {
        return *puVar1;
      }
    }
  }
  return 0;
}

