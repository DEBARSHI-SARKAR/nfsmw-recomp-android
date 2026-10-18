/* speed.exe 0067b110 FUN_0067b110; analysis pseudocode, not buildable source.
 * calls 00676ac0 FUN_00676ac0
 */

void FUN_0067b110(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = (param_2 - param_1) / 0x18;
  iVar3 = iVar1 / 2;
  if (0 < iVar3) {
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x18);
    do {
      iVar3 = iVar3 + -1;
      FUN_00676ac0(param_1,iVar3,iVar1,puVar2[-6],puVar2[-5],puVar2[-4],puVar2[-3],puVar2[-2],
                   puVar2[-1],param_3);
      puVar2 = puVar2 + -6;
    } while (0 < iVar3);
  }
  return;
}

