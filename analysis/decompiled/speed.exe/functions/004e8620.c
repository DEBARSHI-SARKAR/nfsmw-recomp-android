/* speed.exe 004e8620 FUN_004e8620; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004e52c0 FUN_004e52c0
 * calls 00454810 FUN_00454810
 */

void __fastcall FUN_004e8620(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if ((iVar1 == 1) || ((iVar1 != 2 && (iVar1 != 3)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  puVar3 = (undefined4 *)FUN_00454810(0x8aca07f9,uVar2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004e52c0(*puVar3,puVar3[1],puVar3[2],puVar3[3],6,4,0xffffffff,1);
  return;
}

