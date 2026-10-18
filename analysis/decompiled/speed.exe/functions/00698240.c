/* speed.exe 00698240 FUN_00698240; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00698240(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x84);
  if (*(char *)(uVar2 + 0xfc) == '\0') {
    cVar1 = *(char *)(**(int **)(param_1 + 0x78) + 0x5d);
    uVar3 = (undefined3)(uVar2 >> 8);
    uVar2 = CONCAT31(uVar3,cVar1);
    if (cVar1 == '\0') {
      return CONCAT31(uVar3,1);
    }
  }
  return uVar2 & 0xffffff00;
}

