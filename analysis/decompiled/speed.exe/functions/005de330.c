/* speed.exe 005de330 FUN_005de330; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_005de330(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = *param_1; uVar2 != 0; uVar2 = uVar2 >> 1) {
    iVar1 = iVar1 + (uVar2 & 1);
  }
  return iVar1;
}

