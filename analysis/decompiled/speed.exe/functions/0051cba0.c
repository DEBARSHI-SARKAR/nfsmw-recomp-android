/* speed.exe 0051cba0 FUN_0051cba0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0051cba0(int *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  if ((param_3 == -0x6edfbf62) || (param_3 == -0x4a68e40f)) {
    pcVar1 = (char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x82 + DAT_0091ca24 * 0x14);
    *pcVar1 = *pcVar1 == '\0';
  }
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  (**(code **)(*param_1 + 0x38))(param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}

