import React from 'react'
import { Button } from './Button'
import './Hero.scss'
import '../App.css';


export default function Hero() {
    return (
        <div className='hero-container'>

            <h1>The Best Past to Find and Buy Amazing Products</h1>
            <p> Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. </p>

            <div className='hero-btns'>
                <Button
                    className='btns'
                    buttonStyle='btn--outline'
                    buttonSize='btn--large'
                >
                    GET STARTED
                </Button>
                
            </div>

        </div>
    );
};

