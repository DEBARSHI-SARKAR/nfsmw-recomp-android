/* speed.exe 00537500 FUN_00537500; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 0056bc10 FUN_0056bc10
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00536310 FUN_00536310
 */

void __fastcall FUN_00537500(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00536310();
  if (iVar2 < 0) {
    if (*(int *)(param_1 + 0x19c) != 0) {
      FUN_0056c6e0(*(int *)(param_1 + 0x19c));
    }
    *(undefined4 *)(param_1 + 0x19c) = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_0056bc10(0x8173fc6b);
    FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar3);
  }
  return;
}

