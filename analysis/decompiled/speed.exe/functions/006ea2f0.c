/* speed.exe 006ea2f0 FUN_006ea2f0; analysis pseudocode, not buildable source.
 * calls 0044a670 FUN_0044a670
 */

undefined4 __fastcall FUN_006ea2f0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if ((cVar1 != '\0') && (param_1[0xd6] != 0)) {
    uVar2 = FUN_0044a670(param_1[0xd6]);
    return uVar2;
  }
  return 0;
}

