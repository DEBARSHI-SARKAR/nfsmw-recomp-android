/* speed.exe 0045cd20 __break; analysis pseudocode, not buildable source.
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

