/* speed.exe 005f4730 FUN_005f4730; analysis pseudocode, not buildable source.
 * calls 005ed6f0 FUN_005ed6f0
 * calls 005f2530 FUN_005f2530
 * calls 005e87f0 FUN_005e87f0
 */

void __fastcall FUN_005f4730(int param_1)

{
  if (*(char *)(param_1 + 0x3c) != '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    FUN_005e87f0(0,param_1);
    FUN_005ed6f0();
    FUN_005f2530(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4));
    *(int *)(*(int *)(param_1 + 0x34) + 4) = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(int *)(*(int *)(param_1 + 0x34) + 8) = *(int *)(param_1 + 0x34);
  }
  return;
}

