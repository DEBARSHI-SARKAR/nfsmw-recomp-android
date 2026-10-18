/* speed.exe 00606980 FUN_00606980; analysis pseudocode, not buildable source.
 * calls 007ca5ac _longjmp
 * calls 007ca320 _exit
 */

void FUN_00606980(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x44) = param_2;
                    /* WARNING: Subroutine does not return */
    _longjmp((int *)(*(int *)(param_1 + 0x50) + 4),1);
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x28))(param_1);
                    /* WARNING: Subroutine does not return */
  _exit(1);
}

