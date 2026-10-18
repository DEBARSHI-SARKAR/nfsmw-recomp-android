/* speed.exe 00672050 FUN_00672050; analysis pseudocode, not buildable source.
 * calls 0066a890 FUN_0066a890
 */

char __thiscall
FUN_00672050(int param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  cVar2 = '\0';
  if (param_3 == 0) {
    return '\0';
  }
  if (((param_5 != '\0') && (cVar1 = *(char *)(param_3 + 0x16), cVar1 != '\0')) &&
     (uVar4 = 0, cVar1 != '\0')) {
    if (cVar1 == '\0') goto LAB_006720a3;
    do {
      if (*(short *)(param_3 + 0x1e) < 0) {
LAB_006720a3:
        iVar3 = 0;
      }
      else {
        iVar3 = ((int)*(short *)(param_3 + 0x1e) + uVar4) * 0x30 + 0x10 + param_1;
      }
      cVar1 = FUN_0066a890(param_2,iVar3,param_4,1);
      if (cVar1 != '\0') {
        cVar2 = '\x01';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_3 + 0x16));
    if (cVar2 != '\0') {
      return cVar2;
    }
  }
  cVar2 = FUN_0066a890(param_2,param_3,param_4,0);
  if (cVar2 == '\0') {
    return '\0';
  }
  return '\x01';
}

