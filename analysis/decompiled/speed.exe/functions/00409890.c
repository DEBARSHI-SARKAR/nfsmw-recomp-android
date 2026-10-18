/* speed.exe 00409890 FUN_00409890; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00409890(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x14))();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(param_1[-0x1c3] + 100))();
    if (*(char *)(iVar2 + 0x2c) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x004098b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(param_1[-0x1c3] + 100))();
      return uVar3;
    }
  }
  return 0;
}

