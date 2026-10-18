/* speed.exe 004e8810 FUN_004e8810; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004e52c0 FUN_004e52c0
 * calls 00454810 FUN_00454810
 */

void __fastcall FUN_004e8810(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else if (1 < iVar1) {
    iVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_00454810(0xbd6f7135,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004e52c0(*puVar2,puVar2[1],puVar2[2],puVar2[3],8,4,0xffffffff,1);
  return;
}

