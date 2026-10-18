/* speed.exe 00544210 FUN_00544210; analysis pseudocode, not buildable source.
 * calls 00543cc0 FUN_00543cc0
 * calls 0056bc10 FUN_0056bc10
 * calls 00527790 FUN_00527790
 * calls 004647c0 FUN_004647c0
 */

void __fastcall FUN_00544210(int param_1)

{
  undefined4 uVar1;
  undefined1 local_200 [512];
  
  FUN_00543cc0(0x83f4bb3e,0x4000000);
  uVar1 = FUN_0056bc10((-(uint)((DAT_0091cbac & 0x200000) != 0) & 0x54135dba) + 0x83f4bb3e);
  FUN_004647c0(local_200,uVar1,param_1 + 0x40,param_1 + 0x40);
  FUN_00527790(local_200);
  return;
}

