/* speed.exe 0053d7d0 FUN_0053d7d0; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 * calls 0056e340 FUN_0056e340
 * calls 005252d0 FUN_005252d0
 */

void __fastcall FUN_0053d7d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x7326e44c,0xb90429ea);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056e340();
  FUN_005252d0(uVar1,0x92d8775b,uVar2);
  return;
}

