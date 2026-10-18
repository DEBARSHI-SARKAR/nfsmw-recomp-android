/* speed.exe 0081a3bc FUN_0081a3bc; analysis pseudocode, not buildable source.
 * calls 00819fbd FUN_00819fbd
 * calls 0081f7cb FUN_0081f7cb
 * calls 0081a02f FUN_0081a02f
 */

void FUN_0081a3bc(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = param_1;
  uVar4 = 0x1000;
  uVar5 = 0x7fff;
  iVar2 = FUN_0081f7cb(*(undefined4 *)(param_1 + 8));
  if (-1 < iVar2) {
    param_1 = 0;
    pcVar3 = (char *)(iVar1 + 0x1c);
    if (*(char *)(iVar1 + 0xe) != '\0') {
      do {
        if (*pcVar3 == '\0') {
          uVar4 = *(undefined4 *)(pcVar3 + 8);
          *(undefined4 *)(pcVar3 + 4) = uVar4;
        }
        else if (*pcVar3 == '\x02') {
          uVar5 = *(undefined4 *)(pcVar3 + 8);
          *(undefined4 *)(pcVar3 + 4) = uVar5;
        }
        pcVar3 = pcVar3 + 0xc;
        param_1 = param_1 + 1;
      } while (param_1 < (int)(uint)*(byte *)(iVar1 + 0xe));
    }
    FUN_00819fbd(iVar2,uVar4);
    FUN_0081a02f(iVar2,uVar5);
  }
  return;
}

