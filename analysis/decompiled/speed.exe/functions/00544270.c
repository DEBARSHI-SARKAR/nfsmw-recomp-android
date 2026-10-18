/* speed.exe 00544270 FUN_00544270; analysis pseudocode, not buildable source.
 * calls 00543be0 FUN_00543be0
 * calls 0056bc10 FUN_0056bc10
 * calls 00527790 FUN_00527790
 * calls 004647c0 FUN_004647c0
 */

void __fastcall FUN_00544270(int param_1)

{
  undefined4 uVar1;
  undefined1 local_200 [512];
  
  FUN_00543be0(0xc5ec352d,0xd000000);
  uVar1 = FUN_0056bc10(0xc5ec352d);
  FUN_004647c0(local_200,uVar1,param_1 + 0x40);
  FUN_00527790(local_200);
  return;
}

