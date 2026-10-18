/* speed.exe 007a4cd0 FUN_007a4cd0; analysis pseudocode, not buildable source.
 * calls 0056f100 FUN_0056f100
 */

bool __thiscall FUN_007a4cd0(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
  return (*(uint *)(iVar1 + 0x134) & 1 << (param_2 & 0x1f)) != 0;
}

