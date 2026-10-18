/* speed.exe 006c9aa0 FUN_006c9aa0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006c9aa0(int param_1)

{
  if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
    (**(code **)(*DAT_00982bdc + 400))(DAT_00982bdc,0,*(int *)(param_1 + 0x48),0,0xc);
    if (*(int *)(param_1 + 0x30) != 0) {
      (**(code **)(*DAT_00982bdc + 0x1a0))(DAT_00982bdc,*(undefined4 *)(param_1 + 0x34));
      (**(code **)(*DAT_00982bdc + 0x148))
                (DAT_00982bdc,4,0,0,*(undefined4 *)(param_1 + 0x40),0,*(int *)(param_1 + 0x30) / 3);
    }
  }
  return;
}

