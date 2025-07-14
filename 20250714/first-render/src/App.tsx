import { useEffect, useState } from 'react'
import './App.css'
import { Button, Stack } from '@mui/material';

function App() {
  const [count, setCount] = useState(0);
  const [isFirst, setIsFirst] = useState(true);

  const plus = () => {
    setCount(count + 1);
    setIsFirst(false);
  }

  const minus = () => {
    setCount(count - 1);
    setIsFirst(false);
  }

  useEffect(() => {
    document.title = `count is ${count}`
  }, [count]);

  return (
    <>
      <Stack direction={'row'} spacing={2}>
        <Button variant='outlined' onClick={plus}>+</Button>
        <Button variant='outlined' onClick={minus}>-</Button>
      </Stack >

      <p>count is {count}.</p>
      {isFirst && <p>Now, this is the first.</p>}
    </>
  )
}

export default App
