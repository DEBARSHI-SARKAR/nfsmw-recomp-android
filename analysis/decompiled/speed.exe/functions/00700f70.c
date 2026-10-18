/* speed.exe 00700f70 FUN_00700f70; analysis pseudocode, not buildable source.
 * calls 00405da0 FUN_00405da0
 * calls 005cc240 FUN_005cc240
 * calls 0065faf0 FUN_0065faf0
 */

void __fastcall FUN_00700f70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x138) = 999;
  if (*(int *)(param_1 + 0x20c) != 0) {
    uVar1 = FUN_005cc240("Event");
    iVar2 = FUN_00405da0(0,0xf,0,0);
    *(undefined4 *)(iVar2 + 4) = uVar1;
    FUN_0065faf0();
  }
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
  return;
}

