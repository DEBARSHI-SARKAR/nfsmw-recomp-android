/* speed.exe 00537970 FUN_00537970; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 * calls 00460d20 FUN_00460d20
 * calls 0056e340 FUN_0056e340
 */

void __fastcall FUN_00537970(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != 0) {
    uVar1 = FUN_0056e340();
    iVar2 = FUN_00460d20(iVar2 + 0x2a,uVar1);
    if (iVar2 == 0) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x478f18d7,0x36282214);
      return;
    }
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x478f18d7,0x552094e0);
  return;
}

