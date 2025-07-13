import { useState } from 'react'
import './App.css'
import { Button, Stack } from '@mui/material';

function App() {
  const [count, setCount] = useState(0);
  const [firstRender, setFirstRender] = useState(true);

  const plus = () => {
    setCount(count + 1);
    setFirstRender(false);
  };

  const minus = () => {
    setCount(count - 1);
    setFirstRender(false);
  }

  return (
    <>
      <Stack direction={'row'} spacing={2}>
        <Button variant='outlined' onClick={plus}>+</Button>
        <Button variant='outlined' onClick={minus}>-</Button>
      </Stack>

      <p>Now, count is {count}</p>
      {
        firstRender && <p>Now is firstRender.</p>
      }
    </>
  )
}

export default App
