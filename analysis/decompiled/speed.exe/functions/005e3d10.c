/* speed.exe 005e3d10 FUN_005e3d10; analysis pseudocode, not buildable source.
 * calls 0060e370 FUN_0060e370
 * calls 005e2770 FUN_005e2770
 * calls 00614e00 FUN_00614e00
 * calls 00605eb0 FUN_00605eb0
 */

void __fastcall FUN_005e3d10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_008a39fc;
  uVar1 = *DAT_0091e0c8;
  if (*(char *)(param_1 + 10) != '\0') {
    FUN_00614e00(uVar1,*(undefined4 *)param_1[3]);
    FUN_00605eb0(uVar1);
    FUN_0060e370(uVar1,0xffffd8ef);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  FUN_005e2770();
  return;
}

