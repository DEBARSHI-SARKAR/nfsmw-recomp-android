/* speed.exe 0083a500 FUN_0083a500; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_0083a500(char *param_1)

{
  char *pcVar1;
  char *in_EAX;
  
  do {
    pcVar1 = in_EAX;
    in_EAX = pcVar1;
    if (pcVar1 == param_1) goto LAB_0083a511;
    in_EAX = pcVar1 + -1;
  } while (0x1f < (byte)pcVar1[-1]);
  if (*in_EAX == '\n') {
    *pcVar1 = '\0';
    return 0xffffffff;
  }
LAB_0083a511:
  *in_EAX = '\0';
  return 0xffffffff;
}

