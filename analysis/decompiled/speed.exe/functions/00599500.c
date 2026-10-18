/* speed.exe 00599500 FUN_00599500; analysis pseudocode, not buildable source.
 * calls 0058fd10 FUN_0058fd10
 * calls 00634370 FUN_00634370
 * calls 00628cc0 FUN_00628cc0
 * calls 00465a70 FUN_00465a70
 */

void __thiscall FUN_00599500(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x128) == 0) && (param_2 != '\0')) {
    FUN_00634370();
    iVar1 = FUN_00628cc0();
    uVar2 = FUN_00465a70(iVar1 * 0x13 + 0xf4b8,0x40);
    *(undefined4 *)(param_1 + 0x128) = uVar2;
    FUN_00634370();
    iVar1 = FUN_00628cc0();
    FUN_0058fd10(*(undefined4 *)(param_1 + 0x128),iVar1 * 0x13 + 0xf4b8);
  }
  return;
}

