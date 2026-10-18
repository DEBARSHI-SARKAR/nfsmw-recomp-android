/* speed.exe 00840c60 FUN_00840c60; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 */

int FUN_00840c60(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 0x61636374) || (param_2 == 0x75736572)) {
    return param_1 + 0x158c;
  }
  if (param_2 == 0x61757464) {
    return param_1 + 0x148;
  }
  if (param_2 == 0x6c697374) {
    return *(int *)(param_1 + 0x1834);
  }
  if (param_2 == 0x636f6e66) {
    return param_1 + 0x588;
  }
  if (param_2 == 0x70617274) {
    return param_1 + 0x548;
  }
  if (param_2 == 0x70657264) {
    return param_1 + 0x348;
  }
  if (param_2 == 0x70657273) {
    return param_1 + 0x15a8;
  }
  if (param_2 == 0x726f6f6d) {
    return param_1 + 0x17ec;
  }
  if (param_2 == 0x73656c66) {
    return param_1 + 0x15a0;
  }
  if (param_2 == 0x73657276) {
    return param_1 + 0x2098;
  }
  if (param_2 == 0x76657273) {
    iVar1 = FUN_0083a670();
    return iVar1;
  }
  if (param_2 == 0x736c7573) {
    iVar1 = FUN_0083a670();
    return iVar1;
  }
  return 0;
}

