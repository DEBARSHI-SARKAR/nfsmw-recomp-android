/* speed.exe 0056c820 FUN_0056c820; analysis pseudocode, not buildable source.
 * calls 0056c7f0 FUN_0056c7f0
 * calls 0056c7c0 FUN_0056c7c0
 */

undefined4 __thiscall FUN_0056c820(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((*(char *)(param_1 + 0x410) == '\0') || (*(int *)(param_1 + 0x414) == 0)) {
    return 0;
  }
  if (((((param_2 < 0x61) || (0x7a < param_2)) && ((param_2 < 0x41 || (0x5a < param_2)))) &&
      ((param_2 < 0x30 || (0x39 < param_2)))) &&
     (((iVar1 = *(int *)(param_1 + 0x404), iVar1 != 4 ||
       (((param_2 != 0x40 && (param_2 != 0x2e)) && (param_2 != 0x5f)))) &&
      ((iVar1 != 5 ||
       (((param_2 != 0x20 && (param_2 != 0x2c)) && ((param_2 != 0x40 && (param_2 != 0x2e)))))))))) {
    if ((iVar1 != 3) && (iVar1 != 0)) {
      return 0;
    }
    if ((param_2 < 0xc0) || (0xff < param_2)) {
      uVar3 = FUN_0056c7f0(param_2);
      if (((char)uVar3 == '\0') &&
         (cVar2 = FUN_0056c7c0((int)((ulonglong)uVar3 >> 0x20)), cVar2 == '\0')) {
        return 0;
      }
    }
  }
  return 1;
}

