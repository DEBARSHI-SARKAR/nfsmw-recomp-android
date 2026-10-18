/* speed.exe 007242a0 FUN_007242a0; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

int FUN_007242a0(int param_1,undefined4 param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  iVar3 = FUN_00460dd0(param_2,&DAT_008a87a4);
  if (iVar3 == 0) {
    return param_1;
  }
  cVar2 = (char)(param_1 / 100);
  sVar1 = (short)(param_1 % 100);
  if (cVar2 != '\x19') {
    if (cVar2 == '\x18') {
      return (int)(short)(sVar1 + 0x834);
    }
    puVar4 = &DAT_009ab258;
    iVar5 = 0x86;
    iVar3 = FUN_00460dd0(param_2,"GAMECUBE");
    if (iVar3 == 0) {
      puVar4 = &DAT_009ab470;
      iVar5 = 0x81;
    }
    iVar3 = 0;
    if (iVar5 != 0) {
      do {
        if ((short)puVar4[iVar3 * 2] == param_1) {
          return (int)(short)puVar4[iVar3 * 2 + 1];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
    }
    return param_1;
  }
  return (int)(short)(sVar1 + 0x8fc);
}

