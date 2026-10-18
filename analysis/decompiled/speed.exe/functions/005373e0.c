/* speed.exe 005373e0 FUN_005373e0; analysis pseudocode, not buildable source.
 * calls 00598a30 FUN_00598a30
 * calls 0056bc10 FUN_0056bc10
 * calls 00536310 FUN_00536310
 */

void __fastcall FUN_005373e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 0x195) == '\0') && (*(int *)(DAT_0091cf90 + 0x19c) == 2)) {
    iVar1 = FUN_00536310();
    if (iVar1 < 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x195) = 1;
      uVar2 = FUN_0056bc10(0x8173fc6b);
      uVar3 = FUN_00598a30(uVar3,&DAT_00890978,1,0x417b2601,0x911ab364,uVar2);
      *(undefined4 *)(param_1 + 0x19c) = uVar3;
    }
  }
  return;
}

