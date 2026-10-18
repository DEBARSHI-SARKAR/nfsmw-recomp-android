/* speed.exe 0065ab20 FUN_0065ab20; analysis pseudocode, not buildable source.
 * calls 007edb59 FUN_007edb59
 * calls 007edabb FUN_007edabb
 * calls 00461980 FUN_00461980
 */

void __fastcall FUN_0065ab20(int param_1)

{
  undefined4 uVar1;
  
  DAT_00925918 = DAT_00925918 + -1;
  uVar1 = FUN_007edb59(*(undefined4 *)(param_1 + 0xc),100,0);
  FUN_007edabb(uVar1,&LAB_0064d060);
  FUN_00461980(*(undefined4 *)(param_1 + 0x14));
  return;
}

