/* speed.exe 0060e480 FUN_0060e480; analysis pseudocode, not buildable source.
 * calls 006062d0 FUN_006062d0
 * calls 0060b340 FUN_0060b340
 * calls 0060b5b0 FUN_0060b5b0
 * calls 0060b3b0 FUN_0060b3b0
 */

undefined4 FUN_0060e480(int param_1,char *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EDI;
  undefined4 local_4;
  
  cVar2 = *param_2;
  local_4 = 1;
  if (cVar2 != '\0') {
    do {
      switch(cVar2) {
      case 'S':
        FUN_0060b340();
        break;
      default:
        local_4 = 0;
        break;
      case 'f':
        puVar1 = *(undefined4 **)(param_1 + 8);
        *puVar1 = *in_EAX;
        puVar1[1] = in_EAX[1];
        break;
      case 'l':
        if (unaff_EBX == 0) {
          *(undefined4 *)(unaff_EDI + 0x14) = 0xffffffff;
        }
        else {
          uVar3 = FUN_006062d0();
          *(undefined4 *)(unaff_EDI + 0x14) = uVar3;
        }
        break;
      case 'n':
        if (unaff_EBX == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0060b5b0(unaff_EDI + 4);
        }
        *(int *)(unaff_EDI + 8) = iVar4;
        if (iVar4 == 0) {
          iVar4 = FUN_0060b3b0();
          *(int *)(unaff_EDI + 4) = iVar4;
          if (iVar4 == 0) {
            *(undefined1 **)(unaff_EDI + 8) = &DAT_00890978;
          }
          else {
            *(char **)(unaff_EDI + 8) = "global";
          }
        }
        break;
      case 'u':
        *(uint *)(unaff_EDI + 0x18) = (uint)*(byte *)(in_EAX[1] + 7);
      }
      param_2 = param_2 + 1;
      cVar2 = *param_2;
    } while (cVar2 != '\0');
    return local_4;
  }
  return 1;
}

