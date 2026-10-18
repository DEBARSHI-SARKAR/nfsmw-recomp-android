/* speed.exe 005dd3c0 FUN_005dd3c0; analysis pseudocode, not buildable source.
 * calls 0060e370 FUN_0060e370
 * calls 00614e00 FUN_00614e00
 * calls 00605eb0 FUN_00605eb0
 */

void __thiscall FUN_005dd3c0(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_00614e00(param_2,**(undefined4 **)(param_1 + 0xc));
    FUN_00605eb0(param_2);
    FUN_0060e370(param_2,0xffffd8ef);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}

