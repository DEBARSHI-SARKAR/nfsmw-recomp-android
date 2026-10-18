/* speed.exe 0066fb40 FUN_0066fb40; analysis pseudocode, not buildable source.
 * calls 00785430 FUN_00785430
 * calls 00782ee0 FUN_00782ee0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0066fb40(int *param_1)

{
  int iVar1;
  
  FUN_005d0370(*(undefined4 *)(*param_1 + 0x18),0x48,"SmackTrigger");
  *(undefined4 *)(*param_1 + 0x18) = 0;
  FUN_00785430(*param_1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_00782ee0();
    FUN_005d0370(iVar1,0x40,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

